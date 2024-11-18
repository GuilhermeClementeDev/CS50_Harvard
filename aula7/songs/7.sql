select AVG(energy) as media
from songs
where artist_id = (select id from artists where name = 'Drake');
